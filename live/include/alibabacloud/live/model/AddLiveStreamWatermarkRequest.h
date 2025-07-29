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

#ifndef ALIBABACLOUD_LIVE_MODEL_ADDLIVESTREAMWATERMARKREQUEST_H_
#define ALIBABACLOUD_LIVE_MODEL_ADDLIVESTREAMWATERMARKREQUEST_H_

#include <alibabacloud/live/LiveExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Live {
namespace Model {
class ALIBABACLOUD_LIVE_EXPORT AddLiveStreamWatermarkRequest : public RpcServiceRequest {
public:
	AddLiveStreamWatermarkRequest();
	~AddLiveStreamWatermarkRequest();
	float getYOffset() const;
	void setYOffset(float yOffset);
	std::string getPictureUrl() const;
	void setPictureUrl(const std::string &pictureUrl);
	std::string getDescription() const;
	void setDescription(const std::string &description);
	int getType() const;
	void setType(int type);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	int getHeight() const;
	void setHeight(int height);
	float getXOffset() const;
	void setXOffset(float xOffset);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	int getRefWidth() const;
	void setRefWidth(int refWidth);
	int getTransparency() const;
	void setTransparency(int transparency);
	std::string getDomain() const;
	void setDomain(const std::string &domain);
	std::string getName() const;
	void setName(const std::string &name);
	std::string getOffsetCorner() const;
	void setOffsetCorner(const std::string &offsetCorner);
	int getRefHeight() const;
	void setRefHeight(int refHeight);

private:
	float yOffset_;
	std::string pictureUrl_;
	std::string description_;
	int type_;
	std::string regionId_;
	int height_;
	float xOffset_;
	long ownerId_;
	int refWidth_;
	int transparency_;
	std::string domain_;
	std::string name_;
	std::string offsetCorner_;
	int refHeight_;
};
} // namespace Model
} // namespace Live
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_LIVE_MODEL_ADDLIVESTREAMWATERMARKREQUEST_H_
