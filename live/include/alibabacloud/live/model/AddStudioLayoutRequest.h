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

#ifndef ALIBABACLOUD_LIVE_MODEL_ADDSTUDIOLAYOUTREQUEST_H_
#define ALIBABACLOUD_LIVE_MODEL_ADDSTUDIOLAYOUTREQUEST_H_

#include <alibabacloud/live/LiveExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Live {
namespace Model {
class ALIBABACLOUD_LIVE_EXPORT AddStudioLayoutRequest : public RpcServiceRequest {
public:
	AddStudioLayoutRequest();
	~AddStudioLayoutRequest();
	std::string getScreenInputConfigList() const;
	void setScreenInputConfigList(const std::string &screenInputConfigList);
	std::string getLayoutType() const;
	void setLayoutType(const std::string &layoutType);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getLayoutName() const;
	void setLayoutName(const std::string &layoutName);
	std::string getLayerOrderConfigList() const;
	void setLayerOrderConfigList(const std::string &layerOrderConfigList);
	std::string getMediaInputConfigList() const;
	void setMediaInputConfigList(const std::string &mediaInputConfigList);
	std::string getCasterId() const;
	void setCasterId(const std::string &casterId);
	std::string getBgImageConfig() const;
	void setBgImageConfig(const std::string &bgImageConfig);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	std::string getCommonConfig() const;
	void setCommonConfig(const std::string &commonConfig);

private:
	std::string screenInputConfigList_;
	std::string layoutType_;
	std::string regionId_;
	std::string layoutName_;
	std::string layerOrderConfigList_;
	std::string mediaInputConfigList_;
	std::string casterId_;
	std::string bgImageConfig_;
	long ownerId_;
	std::string commonConfig_;
};
} // namespace Model
} // namespace Live
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_LIVE_MODEL_ADDSTUDIOLAYOUTREQUEST_H_
