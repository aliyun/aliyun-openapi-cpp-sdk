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

#ifndef ALIBABACLOUD_ALIDNS_MODEL_DESCRIBEDNSCACHEDOMAINSREQUEST_H_
#define ALIBABACLOUD_ALIDNS_MODEL_DESCRIBEDNSCACHEDOMAINSREQUEST_H_

#include <alibabacloud/alidns/AlidnsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Alidns {
namespace Model {
class ALIBABACLOUD_ALIDNS_EXPORT DescribeDnsCacheDomainsRequest : public RpcServiceRequest {
public:
	DescribeDnsCacheDomainsRequest();
	~DescribeDnsCacheDomainsRequest();
	long getPageNumber() const;
	void setPageNumber(long pageNumber);
	std::string getUserClientIp() const;
	void setUserClientIp(const std::string &userClientIp);
	long getPageSize() const;
	void setPageSize(long pageSize);
	std::string getLang() const;
	void setLang(const std::string &lang);
	std::string getKeyword() const;
	void setKeyword(const std::string &keyword);

private:
	long pageNumber_;
	std::string userClientIp_;
	long pageSize_;
	std::string lang_;
	std::string keyword_;
};
} // namespace Model
} // namespace Alidns
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ALIDNS_MODEL_DESCRIBEDNSCACHEDOMAINSREQUEST_H_
