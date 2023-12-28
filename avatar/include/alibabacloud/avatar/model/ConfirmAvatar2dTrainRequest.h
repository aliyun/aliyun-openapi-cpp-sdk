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

#ifndef ALIBABACLOUD_AVATAR_MODEL_CONFIRMAVATAR2DTRAINREQUEST_H_
#define ALIBABACLOUD_AVATAR_MODEL_CONFIRMAVATAR2DTRAINREQUEST_H_

#include <alibabacloud/avatar/AvatarExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Avatar {
namespace Model {
class ALIBABACLOUD_AVATAR_EXPORT ConfirmAvatar2dTrainRequest : public RpcServiceRequest {
public:
	ConfirmAvatar2dTrainRequest();
	~ConfirmAvatar2dTrainRequest();
	std::string getConfirm() const;
	void setConfirm(const std::string &confirm);
	std::string getCode() const;
	void setCode(const std::string &code);
	long getTenantId() const;
	void setTenantId(long tenantId);

private:
	std::string confirm_;
	std::string code_;
	long tenantId_;
};
} // namespace Model
} // namespace Avatar
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_AVATAR_MODEL_CONFIRMAVATAR2DTRAINREQUEST_H_
