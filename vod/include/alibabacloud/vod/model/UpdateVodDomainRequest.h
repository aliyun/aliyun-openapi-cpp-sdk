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

#ifndef ALIBABACLOUD_VOD_MODEL_UPDATEVODDOMAINREQUEST_H_
#define ALIBABACLOUD_VOD_MODEL_UPDATEVODDOMAINREQUEST_H_

#include <alibabacloud/vod/VodExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Vod {
namespace Model {
class ALIBABACLOUD_VOD_EXPORT UpdateVodDomainRequest : public RpcServiceRequest {
public:
	UpdateVodDomainRequest();
	~UpdateVodDomainRequest();
	std::string getTopLevelDomain() const;
	void setTopLevelDomain(const std::string &topLevelDomain);
	std::string getSources() const;
	void setSources(const std::string &sources);
	std::string getDomainName() const;
	void setDomainName(const std::string &domainName);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	std::string getSecurityToken() const;
	void setSecurityToken(const std::string &securityToken);

private:
	std::string topLevelDomain_;
	std::string sources_;
	std::string domainName_;
	long ownerId_;
	std::string securityToken_;
};
} // namespace Model
} // namespace Vod
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_VOD_MODEL_UPDATEVODDOMAINREQUEST_H_
