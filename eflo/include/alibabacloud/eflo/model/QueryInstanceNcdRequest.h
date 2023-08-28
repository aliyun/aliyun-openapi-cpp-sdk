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

#ifndef ALIBABACLOUD_EFLO_MODEL_QUERYINSTANCENCDREQUEST_H_
#define ALIBABACLOUD_EFLO_MODEL_QUERYINSTANCENCDREQUEST_H_

#include <alibabacloud/eflo/EfloExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Eflo {
namespace Model {
class ALIBABACLOUD_EFLO_EXPORT QueryInstanceNcdRequest : public RpcServiceRequest {
public:
	QueryInstanceNcdRequest();
	~QueryInstanceNcdRequest();
	std::string getInstanceId2() const;
	void setInstanceId2(const std::string &instanceId2);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getInstanceId1() const;
	void setInstanceId1(const std::string &instanceId1);
	std::string getInstanceType() const;
	void setInstanceType(const std::string &instanceType);

private:
	std::string instanceId2_;
	std::string regionId_;
	std::string instanceId1_;
	std::string instanceType_;
};
} // namespace Model
} // namespace Eflo
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_EFLO_MODEL_QUERYINSTANCENCDREQUEST_H_
