/*
 * Copyright 2009-2017 Alibaba Cloud All rights reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <alibabacloud/imm/model/UpdateFigureClusterRequest.h>

using AlibabaCloud::Imm::Model::UpdateFigureClusterRequest;

UpdateFigureClusterRequest::UpdateFigureClusterRequest()
    : RpcServiceRequest("imm", "2020-09-30", "UpdateFigureCluster") {
  setMethod(HttpRequest::Method::Post);
}

UpdateFigureClusterRequest::~UpdateFigureClusterRequest() {}

std::string UpdateFigureClusterRequest::getDatasetName() const {
  return datasetName_;
}

void UpdateFigureClusterRequest::setDatasetName(const std::string &datasetName) {
  datasetName_ = datasetName;
  setParameter(std::string("DatasetName"), datasetName);
}

std::string UpdateFigureClusterRequest::getProjectName() const {
  return projectName_;
}

void UpdateFigureClusterRequest::setProjectName(const std::string &projectName) {
  projectName_ = projectName;
  setParameter(std::string("ProjectName"), projectName);
}

UpdateFigureClusterRequest::FigureCluster UpdateFigureClusterRequest::getFigureCluster() const {
  return figureCluster_;
}

void UpdateFigureClusterRequest::setFigureCluster(const UpdateFigureClusterRequest::FigureCluster &figureCluster) {
  figureCluster_ = figureCluster;
  for(int dep1 = 0; dep1 != figureCluster.cover.figures.size(); dep1++) {
    setParameter(std::string("FigureCluster") + ".Cover.Figures." + std::to_string(dep1 + 1) + ".FigureId", figureCluster.cover.figures[dep1].figureId);
  }
  setParameter(std::string("FigureCluster") + ".MetaLockVersion", std::to_string(figureCluster.metaLockVersion));
  for(auto const &iter1 : figureCluster.customLabels) {
    setParameter(std::string("FigureCluster") + ".CustomLabels." + iter1.first, iter1.second);
  }
  setParameter(std::string("FigureCluster") + ".Name", figureCluster.name);
  setParameter(std::string("FigureCluster") + ".CustomId", figureCluster.customId);
  setParameter(std::string("FigureCluster") + ".ObjectId", figureCluster.objectId);
}

