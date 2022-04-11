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

#ifndef ALIBABACLOUD_VOD_MODEL_DESCRIBEVODUSERDOMAINSREQUEST_H_
#define ALIBABACLOUD_VOD_MODEL_DESCRIBEVODUSERDOMAINSREQUEST_H_

#include <alibabacloud/vod/VodExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Vod {
namespace Model {
class ALIBABACLOUD_VOD_EXPORT DescribeVodUserDomainsRequest : public RpcServiceRequest {
public:
	struct Tag {
		std::string value;
		std::string key;
	};
	DescribeVodUserDomainsRequest();
	~DescribeVodUserDomainsRequest();
	int getPageNumber() const;
	void setPageNumber(int pageNumber);
	bool getCheckDomainShow() const;
	void setCheckDomainShow(bool checkDomainShow);
	std::string getSecurityToken() const;
	void setSecurityToken(const std::string &securityToken);
	std::string getCdnType() const;
	void setCdnType(const std::string &cdnType);
	int getPageSize() const;
	void setPageSize(int pageSize);
	std::vector<Tag> getTag() const;
	void setTag(const std::vector<Tag> &tag);
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

private:
	int pageNumber_;
	bool checkDomainShow_;
	std::string securityToken_;
	std::string cdnType_;
	int pageSize_;
	std::vector<Tag> tag_;
	std::string funcFilter_;
	std::string domainName_;
	long ownerId_;
	std::string funcId_;
	std::string domainStatus_;
	std::string domainSearchType_;
};
} // namespace Model
} // namespace Vod
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_VOD_MODEL_DESCRIBEVODUSERDOMAINSREQUEST_H_
