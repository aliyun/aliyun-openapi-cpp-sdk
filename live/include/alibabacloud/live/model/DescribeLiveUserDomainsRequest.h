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

#ifndef ALIBABACLOUD_LIVE_MODEL_DESCRIBELIVEUSERDOMAINSREQUEST_H_
#define ALIBABACLOUD_LIVE_MODEL_DESCRIBELIVEUSERDOMAINSREQUEST_H_

#include <alibabacloud/live/LiveExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Live {
namespace Model {
class ALIBABACLOUD_LIVE_EXPORT DescribeLiveUserDomainsRequest : public RpcServiceRequest {
public:
	struct Tag {
		std::string value;
		std::string key;
	};
	DescribeLiveUserDomainsRequest();
	~DescribeLiveUserDomainsRequest();
	int getPageNumber() const;
	void setPageNumber(int pageNumber);
	std::string getResourceGroupId() const;
	void setResourceGroupId(const std::string &resourceGroupId);
	std::string getSecurityToken() const;
	void setSecurityToken(const std::string &securityToken);
	int getPageSize() const;
	void setPageSize(int pageSize);
	std::string getRegionName() const;
	void setRegionName(const std::string &regionName);
	std::vector<Tag> getTag() const;
	void setTag(const std::vector<Tag> &tag);
	std::string getDomainName() const;
	void setDomainName(const std::string &domainName);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	std::string getDomainStatus() const;
	void setDomainStatus(const std::string &domainStatus);
	std::string getDomainSearchType() const;
	void setDomainSearchType(const std::string &domainSearchType);
	std::string getLiveDomainType() const;
	void setLiveDomainType(const std::string &liveDomainType);

private:
	int pageNumber_;
	std::string resourceGroupId_;
	std::string securityToken_;
	int pageSize_;
	std::string regionName_;
	std::vector<Tag> tag_;
	std::string domainName_;
	long ownerId_;
	std::string domainStatus_;
	std::string domainSearchType_;
	std::string liveDomainType_;
};
} // namespace Model
} // namespace Live
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_LIVE_MODEL_DESCRIBELIVEUSERDOMAINSREQUEST_H_
