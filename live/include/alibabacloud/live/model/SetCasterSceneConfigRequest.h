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

#ifndef ALIBABACLOUD_LIVE_MODEL_SETCASTERSCENECONFIGREQUEST_H_
#define ALIBABACLOUD_LIVE_MODEL_SETCASTERSCENECONFIGREQUEST_H_

#include <alibabacloud/live/LiveExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Live {
namespace Model {
class ALIBABACLOUD_LIVE_EXPORT SetCasterSceneConfigRequest : public RpcServiceRequest {
public:
	SetCasterSceneConfigRequest();
	~SetCasterSceneConfigRequest();
	std::string getLayoutId() const;
	void setLayoutId(const std::string &layoutId);
	std::vector<std::string> getComponentId() const;
	void setComponentId(const std::vector<std::string> &componentId);
	std::string getCasterId() const;
	void setCasterId(const std::string &casterId);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	std::string getSceneId() const;
	void setSceneId(const std::string &sceneId);

private:
	std::string layoutId_;
	std::vector<std::string> componentId_;
	std::string casterId_;
	long ownerId_;
	std::string sceneId_;
};
} // namespace Model
} // namespace Live
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_LIVE_MODEL_SETCASTERSCENECONFIGREQUEST_H_
