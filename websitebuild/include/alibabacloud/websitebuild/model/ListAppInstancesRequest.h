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

#ifndef ALIBABACLOUD_WEBSITEBUILD_MODEL_LISTAPPINSTANCESREQUEST_H_
#define ALIBABACLOUD_WEBSITEBUILD_MODEL_LISTAPPINSTANCESREQUEST_H_

#include <alibabacloud/websitebuild/WebsiteBuildExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace WebsiteBuild {
namespace Model {
class ALIBABACLOUD_WEBSITEBUILD_EXPORT ListAppInstancesRequest : public RpcServiceRequest {
public:
	ListAppInstancesRequest();
	~ListAppInstancesRequest();
	std::vector<std::string> getStatusList() const;
	void setStatusList(const std::vector<std::string> &statusList);
	int getPageNum() const;
	void setPageNum(int pageNum);
	std::string getOrderColumn() const;
	void setOrderColumn(const std::string &orderColumn);
	std::string getNextToken() const;
	void setNextToken(const std::string &nextToken);
	int getPageSize() const;
	void setPageSize(int pageSize);
	std::string getEndTimeBegin() const;
	void setEndTimeBegin(const std::string &endTimeBegin);
	std::string getQuery() const;
	void setQuery(const std::string &query);
	std::string getExtend() const;
	void setExtend(const std::string &extend);
	std::string getEndTimeEnd() const;
	void setEndTimeEnd(const std::string &endTimeEnd);
	std::string getBizId() const;
	void setBizId(const std::string &bizId);
	int getMaxResults() const;
	void setMaxResults(int maxResults);
	std::string getOrderType() const;
	void setOrderType(const std::string &orderType);

private:
	std::vector<std::string> statusList_;
	int pageNum_;
	std::string orderColumn_;
	std::string nextToken_;
	int pageSize_;
	std::string endTimeBegin_;
	std::string query_;
	std::string extend_;
	std::string endTimeEnd_;
	std::string bizId_;
	int maxResults_;
	std::string orderType_;
};
} // namespace Model
} // namespace WebsiteBuild
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_WEBSITEBUILD_MODEL_LISTAPPINSTANCESREQUEST_H_
