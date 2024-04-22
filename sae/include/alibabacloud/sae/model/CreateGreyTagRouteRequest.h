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

#ifndef ALIBABACLOUD_SAE_MODEL_CREATEGREYTAGROUTEREQUEST_H_
#define ALIBABACLOUD_SAE_MODEL_CREATEGREYTAGROUTEREQUEST_H_

#include <alibabacloud/sae/SaeExport.h>
#include <alibabacloud/core/RoaServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Sae {
namespace Model {
class ALIBABACLOUD_SAE_EXPORT CreateGreyTagRouteRequest : public RoaServiceRequest {
public:
	CreateGreyTagRouteRequest();
	~CreateGreyTagRouteRequest();
	std::string getAppId() const;
	void setAppId(const std::string &appId);
	std::string getName() const;
	void setName(const std::string &name);
	std::string getDescription() const;
	void setDescription(const std::string &description);
	std::string getDubboRules() const;
	void setDubboRules(const std::string &dubboRules);
	std::string getAlbRules() const;
	void setAlbRules(const std::string &albRules);
	std::string getScRules() const;
	void setScRules(const std::string &scRules);

private:
	std::string appId_;
	std::string name_;
	std::string description_;
	std::string dubboRules_;
	std::string albRules_;
	std::string scRules_;
};
} // namespace Model
} // namespace Sae
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_SAE_MODEL_CREATEGREYTAGROUTEREQUEST_H_
