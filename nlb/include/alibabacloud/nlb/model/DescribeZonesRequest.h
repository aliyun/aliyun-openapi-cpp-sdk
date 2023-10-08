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

#ifndef ALIBABACLOUD_NLB_MODEL_DESCRIBEZONESREQUEST_H_
#define ALIBABACLOUD_NLB_MODEL_DESCRIBEZONESREQUEST_H_

#include <alibabacloud/nlb/NlbExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Nlb {
namespace Model {
class ALIBABACLOUD_NLB_EXPORT DescribeZonesRequest : public RpcServiceRequest {
public:
	DescribeZonesRequest();
	~DescribeZonesRequest();
	std::string getClientToken() const;
	void setClientToken(const std::string &clientToken);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getServiceCode() const;
	void setServiceCode(const std::string &serviceCode);
	std::string getAcceptLanguage() const;
	void setAcceptLanguage(const std::string &acceptLanguage);

private:
	std::string clientToken_;
	std::string regionId_;
	std::string serviceCode_;
	std::string acceptLanguage_;
};
} // namespace Model
} // namespace Nlb
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_NLB_MODEL_DESCRIBEZONESREQUEST_H_
