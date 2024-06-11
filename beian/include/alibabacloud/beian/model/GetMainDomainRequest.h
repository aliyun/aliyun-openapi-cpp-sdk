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

#ifndef ALIBABACLOUD_BEIAN_MODEL_GETMAINDOMAINREQUEST_H_
#define ALIBABACLOUD_BEIAN_MODEL_GETMAINDOMAINREQUEST_H_

#include <alibabacloud/beian/BeianExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Beian {
namespace Model {
class ALIBABACLOUD_BEIAN_EXPORT GetMainDomainRequest : public RpcServiceRequest {
public:
	GetMainDomainRequest();
	~GetMainDomainRequest();
	std::string getDomain() const;
	void setDomain(const std::string &domain);

private:
	std::string domain_;
};
} // namespace Model
} // namespace Beian
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_BEIAN_MODEL_GETMAINDOMAINREQUEST_H_
