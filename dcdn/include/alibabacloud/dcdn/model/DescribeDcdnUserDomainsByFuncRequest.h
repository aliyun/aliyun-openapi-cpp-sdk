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

#ifndef ALIBABACLOUD_DCDN_MODEL_DESCRIBEDCDNUSERDOMAINSBYFUNCREQUEST_H_
#define ALIBABACLOUD_DCDN_MODEL_DESCRIBEDCDNUSERDOMAINSBYFUNCREQUEST_H_

#include <alibabacloud/dcdn/DcdnExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Dcdn {
namespace Model {
class ALIBABACLOUD_DCDN_EXPORT DescribeDcdnUserDomainsByFuncRequest : public RpcServiceRequest {
public:
	DescribeDcdnUserDomainsByFuncRequest();
	~DescribeDcdnUserDomainsByFuncRequest();
	std::string getFuncFilter() const;
	void setFuncFilter(const std::string &funcFilter);
	std::string getResourceGroupId() const;
	void setResourceGroupId(const std::string &resourceGroupId);
	std::string getDomainName() const;
	void setDomainName(const std::string &domainName);
	int getPageSize() const;
	void setPageSize(int pageSize);
	std::string getMatchType() const;
	void setMatchType(const std::string &matchType);
	int getFuncId() const;
	void setFuncId(int funcId);
	int getPageNumber() const;
	void setPageNumber(int pageNumber);

private:
	std::string funcFilter_;
	std::string resourceGroupId_;
	std::string domainName_;
	int pageSize_;
	std::string matchType_;
	int funcId_;
	int pageNumber_;
};
} // namespace Model
} // namespace Dcdn
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_DCDN_MODEL_DESCRIBEDCDNUSERDOMAINSBYFUNCREQUEST_H_
