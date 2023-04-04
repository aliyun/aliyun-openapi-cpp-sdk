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

#include <alibabacloud/imm/model/QueryStoriesRequest.h>

using AlibabaCloud::Imm::Model::QueryStoriesRequest;

QueryStoriesRequest::QueryStoriesRequest()
    : RpcServiceRequest("imm", "2020-09-30", "QueryStories") {
  setMethod(HttpRequest::Method::Post);
}

QueryStoriesRequest::~QueryStoriesRequest() {}

std::vector<QueryStoriesRequest::std::string> QueryStoriesRequest::getFigureClusterIds() const {
  return figureClusterIds_;
}

void QueryStoriesRequest::setFigureClusterIds(const std::vector<QueryStoriesRequest::std::string> &figureClusterIds) {
  figureClusterIds_ = figureClusterIds;
  for(int dep1 = 0; dep1 != figureClusterIds.size(); dep1++) {
    setParameter(std::string("FigureClusterIds") + "." + std::to_string(dep1 + 1), figureClusterIds[dep1]);
  }
}

std::string QueryStoriesRequest::getCustomLabels() const {
  return customLabels_;
}

void QueryStoriesRequest::setCustomLabels(const std::string &customLabels) {
  customLabels_ = customLabels;
  setParameter(std::string("CustomLabels"), customLabels);
}

bool QueryStoriesRequest::getWithEmptyStories() const {
  return withEmptyStories_;
}

void QueryStoriesRequest::setWithEmptyStories(bool withEmptyStories) {
  withEmptyStories_ = withEmptyStories;
  setParameter(std::string("WithEmptyStories"), withEmptyStories ? "true" : "false");
}

std::string QueryStoriesRequest::getOrder() const {
  return order_;
}

void QueryStoriesRequest::setOrder(const std::string &order) {
  order_ = order;
  setParameter(std::string("Order"), order);
}

std::string QueryStoriesRequest::getProjectName() const {
  return projectName_;
}

void QueryStoriesRequest::setProjectName(const std::string &projectName) {
  projectName_ = projectName;
  setParameter(std::string("ProjectName"), projectName);
}

std::string QueryStoriesRequest::getSort() const {
  return sort_;
}

void QueryStoriesRequest::setSort(const std::string &sort) {
  sort_ = sort;
  setParameter(std::string("Sort"), sort);
}

std::string QueryStoriesRequest::getStoryType() const {
  return storyType_;
}

void QueryStoriesRequest::setStoryType(const std::string &storyType) {
  storyType_ = storyType;
  setParameter(std::string("StoryType"), storyType);
}

QueryStoriesRequest::StoryStartTimeRange QueryStoriesRequest::getStoryStartTimeRange() const {
  return storyStartTimeRange_;
}

void QueryStoriesRequest::setStoryStartTimeRange(const QueryStoriesRequest::StoryStartTimeRange &storyStartTimeRange) {
  storyStartTimeRange_ = storyStartTimeRange;
  setParameter(std::string("StoryStartTimeRange") + ".Start", storyStartTimeRange.start);
  setParameter(std::string("StoryStartTimeRange") + ".End", storyStartTimeRange.end);
}

std::string QueryStoriesRequest::getStorySubType() const {
  return storySubType_;
}

void QueryStoriesRequest::setStorySubType(const std::string &storySubType) {
  storySubType_ = storySubType;
  setParameter(std::string("StorySubType"), storySubType);
}

long QueryStoriesRequest::getMaxResults() const {
  return maxResults_;
}

void QueryStoriesRequest::setMaxResults(long maxResults) {
  maxResults_ = maxResults;
  setParameter(std::string("MaxResults"), std::to_string(maxResults));
}

std::string QueryStoriesRequest::getNextToken() const {
  return nextToken_;
}

void QueryStoriesRequest::setNextToken(const std::string &nextToken) {
  nextToken_ = nextToken;
  setParameter(std::string("NextToken"), nextToken);
}

std::string QueryStoriesRequest::getDatasetName() const {
  return datasetName_;
}

void QueryStoriesRequest::setDatasetName(const std::string &datasetName) {
  datasetName_ = datasetName;
  setParameter(std::string("DatasetName"), datasetName);
}

QueryStoriesRequest::StoryEndTimeRange QueryStoriesRequest::getStoryEndTimeRange() const {
  return storyEndTimeRange_;
}

void QueryStoriesRequest::setStoryEndTimeRange(const QueryStoriesRequest::StoryEndTimeRange &storyEndTimeRange) {
  storyEndTimeRange_ = storyEndTimeRange;
  setParameter(std::string("StoryEndTimeRange") + ".Start", storyEndTimeRange.start);
  setParameter(std::string("StoryEndTimeRange") + ".End", storyEndTimeRange.end);
}

QueryStoriesRequest::CreateTimeRange QueryStoriesRequest::getCreateTimeRange() const {
  return createTimeRange_;
}

void QueryStoriesRequest::setCreateTimeRange(const QueryStoriesRequest::CreateTimeRange &createTimeRange) {
  createTimeRange_ = createTimeRange;
  setParameter(std::string("CreateTimeRange") + ".Start", createTimeRange.start);
  setParameter(std::string("CreateTimeRange") + ".End", createTimeRange.end);
}

std::string QueryStoriesRequest::getObjectId() const {
  return objectId_;
}

void QueryStoriesRequest::setObjectId(const std::string &objectId) {
  objectId_ = objectId;
  setParameter(std::string("ObjectId"), objectId);
}

std::string QueryStoriesRequest::getStoryName() const {
  return storyName_;
}

void QueryStoriesRequest::setStoryName(const std::string &storyName) {
  storyName_ = storyName;
  setParameter(std::string("StoryName"), storyName);
}

