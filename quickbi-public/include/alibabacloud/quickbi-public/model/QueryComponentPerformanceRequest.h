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

#ifndef ALIBABACLOUD_QUICKBI_PUBLIC_MODEL_QUERYCOMPONENTPERFORMANCEREQUEST_H_
#define ALIBABACLOUD_QUICKBI_PUBLIC_MODEL_QUERYCOMPONENTPERFORMANCEREQUEST_H_

#include <alibabacloud/quickbi-public/Quickbi_publicExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Quickbi_public {
namespace Model {
class ALIBABACLOUD_QUICKBI_PUBLIC_EXPORT QueryComponentPerformanceRequest : public RpcServiceRequest {
public:
	QueryComponentPerformanceRequest();
	~QueryComponentPerformanceRequest();
	std::string getReportId() const;
	void setReportId(const std::string &reportId);
	std::string getAccessPoint() const;
	void setAccessPoint(const std::string &accessPoint);
	int getPageNum() const;
	void setPageNum(int pageNum);
	int getPageSize() const;
	void setPageSize(int pageSize);
	int getCostTimeAvgMin() const;
	void setCostTimeAvgMin(int costTimeAvgMin);
	std::string getQueryType() const;
	void setQueryType(const std::string &queryType);
	std::string getSignType() const;
	void setSignType(const std::string &signType);
	std::string getResourceType() const;
	void setResourceType(const std::string &resourceType);
	std::string getWorkspaceId() const;
	void setWorkspaceId(const std::string &workspaceId);

private:
	std::string reportId_;
	std::string accessPoint_;
	int pageNum_;
	int pageSize_;
	int costTimeAvgMin_;
	std::string queryType_;
	std::string signType_;
	std::string resourceType_;
	std::string workspaceId_;
};
} // namespace Model
} // namespace Quickbi_public
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_QUICKBI_PUBLIC_MODEL_QUERYCOMPONENTPERFORMANCEREQUEST_H_
