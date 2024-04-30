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

#ifndef ALIBABACLOUD_DCDN_MODEL_DESCRIBEDCDNWAFPOLICYVALIDDOMAINSREQUEST_H_
#define ALIBABACLOUD_DCDN_MODEL_DESCRIBEDCDNWAFPOLICYVALIDDOMAINSREQUEST_H_

#include <alibabacloud/dcdn/DcdnExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Dcdn {
namespace Model {
class ALIBABACLOUD_DCDN_EXPORT DescribeDcdnWafPolicyValidDomainsRequest : public RpcServiceRequest {
public:
	DescribeDcdnWafPolicyValidDomainsRequest();
	~DescribeDcdnWafPolicyValidDomainsRequest();
	std::string getDefenseScene() const;
	void setDefenseScene(const std::string &defenseScene);
	std::string getDomainNameLike() const;
	void setDomainNameLike(const std::string &domainNameLike);
	int getPageSize() const;
	void setPageSize(int pageSize);
	int getPageNumber() const;
	void setPageNumber(int pageNumber);

private:
	std::string defenseScene_;
	std::string domainNameLike_;
	int pageSize_;
	int pageNumber_;
};
} // namespace Model
} // namespace Dcdn
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_DCDN_MODEL_DESCRIBEDCDNWAFPOLICYVALIDDOMAINSREQUEST_H_
