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

#ifndef ALIBABACLOUD_R_KVSTORE_MODEL_SWITCHINSTANCEZONEFAILOVERREQUEST_H_
#define ALIBABACLOUD_R_KVSTORE_MODEL_SWITCHINSTANCEZONEFAILOVERREQUEST_H_

#include <alibabacloud/r-kvstore/R_kvstoreExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace R_kvstore {
namespace Model {
class ALIBABACLOUD_R_KVSTORE_EXPORT SwitchInstanceZoneFailOverRequest : public RpcServiceRequest {
public:
	SwitchInstanceZoneFailOverRequest();
	~SwitchInstanceZoneFailOverRequest();
	std::string getSiteFaultTime() const;
	void setSiteFaultTime(const std::string &siteFaultTime);
	std::string getTargetZoneId() const;
	void setTargetZoneId(const std::string &targetZoneId);
	std::string getInstanceId() const;
	void setInstanceId(const std::string &instanceId);

private:
	std::string siteFaultTime_;
	std::string targetZoneId_;
	std::string instanceId_;
};
} // namespace Model
} // namespace R_kvstore
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_R_KVSTORE_MODEL_SWITCHINSTANCEZONEFAILOVERREQUEST_H_
