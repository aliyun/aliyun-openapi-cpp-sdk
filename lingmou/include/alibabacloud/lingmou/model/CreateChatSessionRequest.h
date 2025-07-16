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

#ifndef ALIBABACLOUD_LINGMOU_MODEL_CREATECHATSESSIONREQUEST_H_
#define ALIBABACLOUD_LINGMOU_MODEL_CREATECHATSESSIONREQUEST_H_

#include <alibabacloud/lingmou/LingMouExport.h>
#include <alibabacloud/core/RoaServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace LingMou {
namespace Model {
class ALIBABACLOUD_LINGMOU_EXPORT CreateChatSessionRequest : public RoaServiceRequest {
public:
	CreateChatSessionRequest();
	~CreateChatSessionRequest();
	std::string getLicense() const;
	void setLicense(const std::string &license);
	std::string getInstanceId() const;
	void setInstanceId(const std::string &instanceId);
	std::string getId() const;
	void setId(const std::string &id);
	std::string getPlatform() const;
	void setPlatform(const std::string &platform);

private:
	std::string license_;
	std::string instanceId_;
	std::string id_;
	std::string platform_;
};
} // namespace Model
} // namespace LingMou
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_LINGMOU_MODEL_CREATECHATSESSIONREQUEST_H_
