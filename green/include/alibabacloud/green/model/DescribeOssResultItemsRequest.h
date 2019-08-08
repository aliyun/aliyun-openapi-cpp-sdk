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

#ifndef ALIBABACLOUD_GREEN_MODEL_DESCRIBEOSSRESULTITEMSREQUEST_H_
#define ALIBABACLOUD_GREEN_MODEL_DESCRIBEOSSRESULTITEMSREQUEST_H_

#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/green/GreenExport.h>
#include <string>
#include <vector>

namespace AlibabaCloud {
namespace Green {
namespace Model {
class ALIBABACLOUD_GREEN_EXPORT DescribeOssResultItemsRequest
    : public RpcServiceRequest {

public:
  DescribeOssResultItemsRequest();
  ~DescribeOssResultItemsRequest();

  int getTotalCount() const;
  void setTotalCount(int totalCount);
  float getMinScore() const;
  void setMinScore(float minScore);
  std::string getSuggestion() const;
  void setSuggestion(const std::string &suggestion);
  int getCurrentPage() const;
  void setCurrentPage(int currentPage);
  float getMaxScore() const;
  void setMaxScore(float maxScore);
  std::string getStartDate() const;
  void setStartDate(const std::string &startDate);
  std::string getResourceType() const;
  void setResourceType(const std::string &resourceType);
  std::string getScene() const;
  void setScene(const std::string &scene);
  std::string getQueryId() const;
  void setQueryId(const std::string &queryId);
  std::string getBucket() const;
  void setBucket(const std::string &bucket);
  std::string getEndDate() const;
  void setEndDate(const std::string &endDate);
  std::string getSourceIp() const;
  void setSourceIp(const std::string &sourceIp);
  int getPageSize() const;
  void setPageSize(int pageSize);
  std::string getLang() const;
  void setLang(const std::string &lang);
  bool getStock() const;
  void setStock(bool stock);
  std::string getObject() const;
  void setObject(const std::string &object);

private:
  int totalCount_;
  float minScore_;
  std::string suggestion_;
  int currentPage_;
  float maxScore_;
  std::string startDate_;
  std::string resourceType_;
  std::string scene_;
  std::string queryId_;
  std::string bucket_;
  std::string endDate_;
  std::string sourceIp_;
  int pageSize_;
  std::string lang_;
  bool stock_;
  std::string object_;
};
} // namespace Model
} // namespace Green
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_GREEN_MODEL_DESCRIBEOSSRESULTITEMSREQUEST_H_