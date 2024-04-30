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

#ifndef ALIBABACLOUD_DCDN_MODEL_DESCRIBEDCDNDOMAINORIGINTRAFFICDATAREQUEST_H_
#define ALIBABACLOUD_DCDN_MODEL_DESCRIBEDCDNDOMAINORIGINTRAFFICDATAREQUEST_H_

#include <alibabacloud/dcdn/DcdnExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Dcdn {
namespace Model {
class ALIBABACLOUD_DCDN_EXPORT DescribeDcdnDomainOriginTrafficDataRequest : public RpcServiceRequest {
public:
	DescribeDcdnDomainOriginTrafficDataRequest();
	~DescribeDcdnDomainOriginTrafficDataRequest();
	std::string getDomainName() const;
	void setDomainName(const std::string &domainName);
	std::string getEndTime() const;
	void setEndTime(const std::string &endTime);
	std::string getInterval() const;
	void setInterval(const std::string &interval);
	std::string getStartTime() const;
	void setStartTime(const std::string &startTime);

private:
	std::string domainName_;
	std::string endTime_;
	std::string interval_;
	std::string startTime_;
};
} // namespace Model
} // namespace Dcdn
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_DCDN_MODEL_DESCRIBEDCDNDOMAINORIGINTRAFFICDATAREQUEST_H_
