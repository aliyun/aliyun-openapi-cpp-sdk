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

#ifndef ALIBABACLOUD_LIVE_MODEL_UPDATERTCCLOUDRECORDINGREQUEST_H_
#define ALIBABACLOUD_LIVE_MODEL_UPDATERTCCLOUDRECORDINGREQUEST_H_

#include <alibabacloud/live/LiveExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Live {
namespace Model {
class ALIBABACLOUD_LIVE_EXPORT UpdateRtcCloudRecordingRequest : public RpcServiceRequest {
public:
	struct SubscribeParams {
		struct SubscribeUserIdListItem {
			int streamType;
			int sourceType;
			std::string userId;
		};
		SubscribeUserIdListItem subscribeUserIdListItem;
		std::vector<SubscribeUserIdListItem> subscribeUserIdList;
	};
	struct MixLayoutParams {
		struct UserPanesItem {
			int zOrder;
			std::string width;
			std::string x;
			std::string y;
			int sourceType;
			std::string userId;
			std::string height;
			struct SubBackground {
				int renderMode;
				std::string url;
			};
			SubBackground subBackground;
		};
		UserPanesItem userPanesItem;
		std::vector<UserPanesItem> userPanes;
		struct MixBackground {
			int renderMode;
			std::string url;
		};
		MixBackground mixBackground;
	};
	UpdateRtcCloudRecordingRequest();
	~UpdateRtcCloudRecordingRequest();
	std::string getTaskId() const;
	void setTaskId(const std::string &taskId);
	SubscribeParams getSubscribeParams() const;
	void setSubscribeParams(const SubscribeParams &subscribeParams);
	MixLayoutParams getMixLayoutParams() const;
	void setMixLayoutParams(const MixLayoutParams &mixLayoutParams);

private:
	std::string taskId_;
	SubscribeParams subscribeParams_;
	MixLayoutParams mixLayoutParams_;
};
} // namespace Model
} // namespace Live
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_LIVE_MODEL_UPDATERTCCLOUDRECORDINGREQUEST_H_
