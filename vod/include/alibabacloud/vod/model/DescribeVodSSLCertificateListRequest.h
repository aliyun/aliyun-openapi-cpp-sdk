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

#ifndef ALIBABACLOUD_VOD_MODEL_DESCRIBEVODSSLCERTIFICATELISTREQUEST_H_
#define ALIBABACLOUD_VOD_MODEL_DESCRIBEVODSSLCERTIFICATELISTREQUEST_H_

#include <alibabacloud/vod/VodExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Vod {
namespace Model {
class ALIBABACLOUD_VOD_EXPORT DescribeVodSSLCertificateListRequest : public RpcServiceRequest {
public:
	DescribeVodSSLCertificateListRequest();
	~DescribeVodSSLCertificateListRequest();
	long getPageNumber() const;
	void setPageNumber(long pageNumber);
	std::string getSecurityToken() const;
	void setSecurityToken(const std::string &securityToken);
	long getPageSize() const;
	void setPageSize(long pageSize);
	std::string getMatchType() const;
	void setMatchType(const std::string &matchType);
	std::string getAlgorithm() const;
	void setAlgorithm(const std::string &algorithm);
	std::string getDomainName() const;
	void setDomainName(const std::string &domainName);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	std::string getSearchKeyword() const;
	void setSearchKeyword(const std::string &searchKeyword);

private:
	long pageNumber_;
	std::string securityToken_;
	long pageSize_;
	std::string matchType_;
	std::string algorithm_;
	std::string domainName_;
	long ownerId_;
	std::string searchKeyword_;
};
} // namespace Model
} // namespace Vod
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_VOD_MODEL_DESCRIBEVODSSLCERTIFICATELISTREQUEST_H_
