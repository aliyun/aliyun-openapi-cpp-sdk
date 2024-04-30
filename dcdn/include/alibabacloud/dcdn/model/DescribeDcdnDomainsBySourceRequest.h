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

#ifndef ALIBABACLOUD_DCDN_MODEL_DESCRIBEDCDNDOMAINSBYSOURCEREQUEST_H_
#define ALIBABACLOUD_DCDN_MODEL_DESCRIBEDCDNDOMAINSBYSOURCEREQUEST_H_

#include <alibabacloud/dcdn/DcdnExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Dcdn {
namespace Model {
class ALIBABACLOUD_DCDN_EXPORT DescribeDcdnDomainsBySourceRequest : public RpcServiceRequest {
public:
	DescribeDcdnDomainsBySourceRequest();
	~DescribeDcdnDomainsBySourceRequest();
	std::string getProduct() const;
	void setProduct(const std::string &product);
	std::string getSources() const;
	void setSources(const std::string &sources);

private:
	std::string product_;
	std::string sources_;
};
} // namespace Model
} // namespace Dcdn
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_DCDN_MODEL_DESCRIBEDCDNDOMAINSBYSOURCEREQUEST_H_
