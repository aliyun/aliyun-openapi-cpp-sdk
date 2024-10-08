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

#ifndef ALIBABACLOUD_RESOURCECENTER_MODEL_CREATESAVEDQUERYREQUEST_H_
#define ALIBABACLOUD_RESOURCECENTER_MODEL_CREATESAVEDQUERYREQUEST_H_

#include <alibabacloud/resourcecenter/ResourceCenterExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace ResourceCenter {
namespace Model {
class ALIBABACLOUD_RESOURCECENTER_EXPORT CreateSavedQueryRequest : public RpcServiceRequest {
public:
	CreateSavedQueryRequest();
	~CreateSavedQueryRequest();
	std::string getExpression() const;
	void setExpression(const std::string &expression);
	std::string getDescription() const;
	void setDescription(const std::string &description);
	std::string getName() const;
	void setName(const std::string &name);

private:
	std::string expression_;
	std::string description_;
	std::string name_;
};
} // namespace Model
} // namespace ResourceCenter
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_RESOURCECENTER_MODEL_CREATESAVEDQUERYREQUEST_H_
