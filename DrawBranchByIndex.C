void DrawBranchByIndex (TTree* tree, int index, const char* selection = "", const char* option = "") {
    TBranch *branch = (TBranch*)tree -> GetListOfBranches() -> At(index);
    if (branch) {
        tree -> Draw(branch -> GetName(), selection, option);
    }
    else {
        std::cout << "Branch index: " << index << " is out of bounds." << std::endl;
    }
}