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

#ifndef ALIBABACLOUD_CLOUDAPI_MODEL_MODIFYINSTANCESPECREQUEST_H_
#define ALIBABACLOUD_CLOUDAPI_MODEL_MODIFYINSTANCESPECREQUEST_H_

#include <alibabacloud/cloudapi/CloudAPIExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace CloudAPI {
namespace Model {
class ALIBABACLOUD_CLOUDAPI_EXPORT ModifyInstanceSpecRequest : public RpcServiceRequest {
public:
	ModifyInstanceSpecRequest();
	~ModifyInstanceSpecRequest();
	bool getAutoPay() const;
	void setAutoPay(bool autoPay);
	bool getSkipWaitSwitch() const;
	void setSkipWaitSwitch(bool skipWaitSwitch);
	std::string getInstanceSpec() const;
	void setInstanceSpec(const std::string &instanceSpec);
	std::string getToken() const;
	void setToken(const std::string &token);
	std::string getInstanceId() const;
	void setInstanceId(const std::string &instanceId);
	std::string getModifyAction() const;
	void setModifyAction(const std::string &modifyAction);

private:
	bool autoPay_;
	bool skipWaitSwitch_;
	std::string instanceSpec_;
	std::string token_;
	std::string instanceId_;
	std::string modifyAction_;
};
} // namespace Model
} // namespace CloudAPI
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_CLOUDAPI_MODEL_MODIFYINSTANCESPECREQUEST_H_
