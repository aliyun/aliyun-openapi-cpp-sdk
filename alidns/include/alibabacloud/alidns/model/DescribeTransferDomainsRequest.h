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

#ifndef ALIBABACLOUD_ALIDNS_MODEL_DESCRIBETRANSFERDOMAINSREQUEST_H_
#define ALIBABACLOUD_ALIDNS_MODEL_DESCRIBETRANSFERDOMAINSREQUEST_H_

#include <alibabacloud/alidns/AlidnsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Alidns {
namespace Model {
class ALIBABACLOUD_ALIDNS_EXPORT DescribeTransferDomainsRequest : public RpcServiceRequest {
public:
	DescribeTransferDomainsRequest();
	~DescribeTransferDomainsRequest();
	long getFromUserId() const;
	void setFromUserId(long fromUserId);
	long getPageNumber() const;
	void setPageNumber(long pageNumber);
	long getTargetUserId() const;
	void setTargetUserId(long targetUserId);
	long getPageSize() const;
	void setPageSize(long pageSize);
	std::string getLang() const;
	void setLang(const std::string &lang);
	std::string getDomainName() const;
	void setDomainName(const std::string &domainName);
	std::string getTransferType() const;
	void setTransferType(const std::string &transferType);
	std::string getUserClientIp() const;
	void setUserClientIp(const std::string &userClientIp);

private:
	long fromUserId_;
	long pageNumber_;
	long targetUserId_;
	long pageSize_;
	std::string lang_;
	std::string domainName_;
	std::string transferType_;
	std::string userClientIp_;
};
} // namespace Model
} // namespace Alidns
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ALIDNS_MODEL_DESCRIBETRANSFERDOMAINSREQUEST_H_
