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

#ifndef ALIBABACLOUD_EIAM_MODEL_LISTAPPLICATIONSREQUEST_H_
#define ALIBABACLOUD_EIAM_MODEL_LISTAPPLICATIONSREQUEST_H_

#include <alibabacloud/eiam/EiamExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Eiam {
namespace Model {
class ALIBABACLOUD_EIAM_EXPORT ListApplicationsRequest : public RpcServiceRequest {
public:
	ListApplicationsRequest();
	~ListApplicationsRequest();
	std::string getResourceServerStatus() const;
	void setResourceServerStatus(const std::string &resourceServerStatus);
	long getPageNumber() const;
	void setPageNumber(long pageNumber);
	std::string getM2MClientStatus() const;
	void setM2MClientStatus(const std::string &m2MClientStatus);
	long getPageSize() const;
	void setPageSize(long pageSize);
	std::string getAuthorizationType() const;
	void setAuthorizationType(const std::string &authorizationType);
	std::string getApplicationName() const;
	void setApplicationName(const std::string &applicationName);
	std::vector<std::string> getApplicationIds() const;
	void setApplicationIds(const std::vector<std::string> &applicationIds);
	std::string getInstanceId() const;
	void setInstanceId(const std::string &instanceId);
	std::string getSsoType() const;
	void setSsoType(const std::string &ssoType);
	std::string getStatus() const;
	void setStatus(const std::string &status);

private:
	std::string resourceServerStatus_;
	long pageNumber_;
	std::string m2MClientStatus_;
	long pageSize_;
	std::string authorizationType_;
	std::string applicationName_;
	std::vector<std::string> applicationIds_;
	std::string instanceId_;
	std::string ssoType_;
	std::string status_;
};
} // namespace Model
} // namespace Eiam
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_EIAM_MODEL_LISTAPPLICATIONSREQUEST_H_
