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

#ifndef ALIBABACLOUD_ENS_MODEL_CREATESDGREQUEST_H_
#define ALIBABACLOUD_ENS_MODEL_CREATESDGREQUEST_H_

#include <alibabacloud/ens/EnsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Ens {
namespace Model {
class ALIBABACLOUD_ENS_EXPORT CreateSDGRequest : public RpcServiceRequest {
public:
	CreateSDGRequest();
	~CreateSDGRequest();
	std::string getFromSDGId() const;
	void setFromSDGId(const std::string &fromSDGId);
	std::string getDescription() const;
	void setDescription(const std::string &description);
	std::string getInstanceId() const;
	void setInstanceId(const std::string &instanceId);
	std::string getSize() const;
	void setSize(const std::string &size);

private:
	std::string fromSDGId_;
	std::string description_;
	std::string instanceId_;
	std::string size_;
};
} // namespace Model
} // namespace Ens
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ENS_MODEL_CREATESDGREQUEST_H_
