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

#ifndef ALIBABACLOUD_WSS_MODEL_MODIFYINSTANCEPROPERTIESREQUEST_H_
#define ALIBABACLOUD_WSS_MODEL_MODIFYINSTANCEPROPERTIESREQUEST_H_

#include <alibabacloud/wss/WssExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Wss {
namespace Model {
class ALIBABACLOUD_WSS_EXPORT ModifyInstancePropertiesRequest : public RpcServiceRequest {
public:
	ModifyInstancePropertiesRequest();
	~ModifyInstancePropertiesRequest();
	std::string getResourceType() const;
	void setResourceType(const std::string &resourceType);
	std::string getInstanceId() const;
	void setInstanceId(const std::string &instanceId);
	std::vector<std::string> getInstanceIds() const;
	void setInstanceIds(const std::vector<std::string> &instanceIds);
	std::string getValue() const;
	void setValue(const std::string &value);
	std::string getKey() const;
	void setKey(const std::string &key);

private:
	std::string resourceType_;
	std::string instanceId_;
	std::vector<std::string> instanceIds_;
	std::string value_;
	std::string key_;
};
} // namespace Model
} // namespace Wss
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_WSS_MODEL_MODIFYINSTANCEPROPERTIESREQUEST_H_
