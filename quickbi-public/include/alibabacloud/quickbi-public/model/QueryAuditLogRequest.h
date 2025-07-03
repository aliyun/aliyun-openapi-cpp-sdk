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

#ifndef ALIBABACLOUD_QUICKBI_PUBLIC_MODEL_QUERYAUDITLOGREQUEST_H_
#define ALIBABACLOUD_QUICKBI_PUBLIC_MODEL_QUERYAUDITLOGREQUEST_H_

#include <alibabacloud/quickbi-public/Quickbi_publicExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Quickbi_public {
namespace Model {
class ALIBABACLOUD_QUICKBI_PUBLIC_EXPORT QueryAuditLogRequest : public RpcServiceRequest {
public:
	QueryAuditLogRequest();
	~QueryAuditLogRequest();
	std::string getAccessSourceFlag() const;
	void setAccessSourceFlag(const std::string &accessSourceFlag);
	std::string getAccessPoint() const;
	void setAccessPoint(const std::string &accessPoint);
	std::string getStartDate() const;
	void setStartDate(const std::string &startDate);
	std::string getLogType() const;
	void setLogType(const std::string &logType);
	std::string getSignType() const;
	void setSignType(const std::string &signType);
	std::string getResourceType() const;
	void setResourceType(const std::string &resourceType);
	std::string getOperatorTypes() const;
	void setOperatorTypes(const std::string &operatorTypes);
	std::string getEndDate() const;
	void setEndDate(const std::string &endDate);
	std::string getOperatorId() const;
	void setOperatorId(const std::string &operatorId);
	std::string getWorkspaceId() const;
	void setWorkspaceId(const std::string &workspaceId);
	std::string getUserAccessDevice() const;
	void setUserAccessDevice(const std::string &userAccessDevice);

private:
	std::string accessSourceFlag_;
	std::string accessPoint_;
	std::string startDate_;
	std::string logType_;
	std::string signType_;
	std::string resourceType_;
	std::string operatorTypes_;
	std::string endDate_;
	std::string operatorId_;
	std::string workspaceId_;
	std::string userAccessDevice_;
};
} // namespace Model
} // namespace Quickbi_public
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_QUICKBI_PUBLIC_MODEL_QUERYAUDITLOGREQUEST_H_
