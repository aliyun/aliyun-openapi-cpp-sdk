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

#ifndef ALIBABACLOUD_SCDN_MODEL_DESCRIBESCDNUSERDOMAINSREQUEST_H_
#define ALIBABACLOUD_SCDN_MODEL_DESCRIBESCDNUSERDOMAINSREQUEST_H_

#include <alibabacloud/scdn/ScdnExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Scdn {
namespace Model {
class ALIBABACLOUD_SCDN_EXPORT DescribeScdnUserDomainsRequest : public RpcServiceRequest {
public:
	DescribeScdnUserDomainsRequest();
	~DescribeScdnUserDomainsRequest();
	int getPageNumber() const;
	void setPageNumber(int pageNumber);
	bool getCheckDomainShow() const;
	void setCheckDomainShow(bool checkDomainShow);
	std::string getResourceGroupId() const;
	void setResourceGroupId(const std::string &resourceGroupId);
	std::string getSecurityToken() const;
	void setSecurityToken(const std::string &securityToken);
	std::string getChangeEndTime() const;
	void setChangeEndTime(const std::string &changeEndTime);
	int getPageSize() const;
	void setPageSize(int pageSize);
	std::string getFuncFilter() const;
	void setFuncFilter(const std::string &funcFilter);
	std::string getDomainName() const;
	void setDomainName(const std::string &domainName);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	std::string getFuncId() const;
	void setFuncId(const std::string &funcId);
	std::string getDomainStatus() const;
	void setDomainStatus(const std::string &domainStatus);
	std::string getDomainSearchType() const;
	void setDomainSearchType(const std::string &domainSearchType);
	std::string getChangeStartTime() const;
	void setChangeStartTime(const std::string &changeStartTime);

private:
	int pageNumber_;
	bool checkDomainShow_;
	std::string resourceGroupId_;
	std::string securityToken_;
	std::string changeEndTime_;
	int pageSize_;
	std::string funcFilter_;
	std::string domainName_;
	long ownerId_;
	std::string funcId_;
	std::string domainStatus_;
	std::string domainSearchType_;
	std::string changeStartTime_;
};
} // namespace Model
} // namespace Scdn
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_SCDN_MODEL_DESCRIBESCDNUSERDOMAINSREQUEST_H_
