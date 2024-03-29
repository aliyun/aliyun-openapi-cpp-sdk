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

#ifndef ALIBABACLOUD_LTO_MODEL_ADDMEMBERREQUEST_H_
#define ALIBABACLOUD_LTO_MODEL_ADDMEMBERREQUEST_H_

#include <alibabacloud/lto/LtoExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Lto {
namespace Model {
class ALIBABACLOUD_LTO_EXPORT AddMemberRequest : public RpcServiceRequest {
public:
	AddMemberRequest();
	~AddMemberRequest();
	std::string getRemark() const;
	void setRemark(const std::string &remark);
	std::string getUid() const;
	void setUid(const std::string &uid);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getTelephony() const;
	void setTelephony(const std::string &telephony);
	std::string getName() const;
	void setName(const std::string &name);
	int getAuthorizedDeviceCount() const;
	void setAuthorizedDeviceCount(int authorizedDeviceCount);
	std::string getContactor() const;
	void setContactor(const std::string &contactor);
	long getAuthorizedCount() const;
	void setAuthorizedCount(long authorizedCount);

private:
	std::string remark_;
	std::string uid_;
	std::string regionId_;
	std::string telephony_;
	std::string name_;
	int authorizedDeviceCount_;
	std::string contactor_;
	long authorizedCount_;
};
} // namespace Model
} // namespace Lto
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_LTO_MODEL_ADDMEMBERREQUEST_H_
