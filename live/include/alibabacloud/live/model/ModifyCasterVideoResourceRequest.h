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

#ifndef ALIBABACLOUD_LIVE_MODEL_MODIFYCASTERVIDEORESOURCEREQUEST_H_
#define ALIBABACLOUD_LIVE_MODEL_MODIFYCASTERVIDEORESOURCEREQUEST_H_

#include <alibabacloud/live/LiveExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Live {
namespace Model {
class ALIBABACLOUD_LIVE_EXPORT ModifyCasterVideoResourceRequest : public RpcServiceRequest {
public:
	ModifyCasterVideoResourceRequest();
	~ModifyCasterVideoResourceRequest();
	std::string getImageId() const;
	void setImageId(const std::string &imageId);
	int getInputType() const;
	void setInputType(int inputType);
	int getEndOffset() const;
	void setEndOffset(int endOffset);
	std::string getMaterialId() const;
	void setMaterialId(const std::string &materialId);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getResourceId() const;
	void setResourceId(const std::string &resourceId);
	std::string getVodUrl() const;
	void setVodUrl(const std::string &vodUrl);
	std::string getCasterId() const;
	void setCasterId(const std::string &casterId);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	int getBeginOffset() const;
	void setBeginOffset(int beginOffset);
	std::string getLiveStreamUrl() const;
	void setLiveStreamUrl(const std::string &liveStreamUrl);
	std::string getImageUrl() const;
	void setImageUrl(const std::string &imageUrl);
	int getPtsCallbackInterval() const;
	void setPtsCallbackInterval(int ptsCallbackInterval);
	std::string getResourceName() const;
	void setResourceName(const std::string &resourceName);
	int getRepeatNum() const;
	void setRepeatNum(int repeatNum);

private:
	std::string imageId_;
	int inputType_;
	int endOffset_;
	std::string materialId_;
	std::string regionId_;
	std::string resourceId_;
	std::string vodUrl_;
	std::string casterId_;
	long ownerId_;
	int beginOffset_;
	std::string liveStreamUrl_;
	std::string imageUrl_;
	int ptsCallbackInterval_;
	std::string resourceName_;
	int repeatNum_;
};
} // namespace Model
} // namespace Live
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_LIVE_MODEL_MODIFYCASTERVIDEORESOURCEREQUEST_H_
