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

#ifndef ALIBABACLOUD_ENS_MODEL_MODIFYINSTANCEAUTORENEWATTRIBUTEREQUEST_H_
#define ALIBABACLOUD_ENS_MODEL_MODIFYINSTANCEAUTORENEWATTRIBUTEREQUEST_H_

#include <alibabacloud/ens/EnsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Ens {
namespace Model {
class ALIBABACLOUD_ENS_EXPORT ModifyInstanceAutoRenewAttributeRequest : public RpcServiceRequest {
public:
	ModifyInstanceAutoRenewAttributeRequest();
	~ModifyInstanceAutoRenewAttributeRequest();
	std::string getDuration() const;
	void setDuration(const std::string &duration);
	std::string getRenewalStatus() const;
	void setRenewalStatus(const std::string &renewalStatus);
	std::string getOwnerId() const;
	void setOwnerId(const std::string &ownerId);
	std::string getAutoRenew() const;
	void setAutoRenew(const std::string &autoRenew);
	std::string getInstanceIds() const;
	void setInstanceIds(const std::string &instanceIds);

private:
	std::string duration_;
	std::string renewalStatus_;
	std::string ownerId_;
	std::string autoRenew_;
	std::string instanceIds_;
};
} // namespace Model
} // namespace Ens
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ENS_MODEL_MODIFYINSTANCEAUTORENEWATTRIBUTEREQUEST_H_
