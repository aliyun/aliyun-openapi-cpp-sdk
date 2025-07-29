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

#ifndef ALIBABACLOUD_LIVE_MODEL_MODIFYSHOWLISTREQUEST_H_
#define ALIBABACLOUD_LIVE_MODEL_MODIFYSHOWLISTREQUEST_H_

#include <alibabacloud/live/LiveExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Live {
namespace Model {
class ALIBABACLOUD_LIVE_EXPORT ModifyShowListRequest : public RpcServiceRequest {
public:
	ModifyShowListRequest();
	~ModifyShowListRequest();
	int getRepeatTimes() const;
	void setRepeatTimes(int repeatTimes);
	std::string getHighPriorityShowStartTime() const;
	void setHighPriorityShowStartTime(const std::string &highPriorityShowStartTime);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getCasterId() const;
	void setCasterId(const std::string &casterId);
	std::string getHighPriorityShowId() const;
	void setHighPriorityShowId(const std::string &highPriorityShowId);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	std::string getShowId() const;
	void setShowId(const std::string &showId);
	int getSpot() const;
	void setSpot(int spot);

private:
	int repeatTimes_;
	std::string highPriorityShowStartTime_;
	std::string regionId_;
	std::string casterId_;
	std::string highPriorityShowId_;
	long ownerId_;
	std::string showId_;
	int spot_;
};
} // namespace Model
} // namespace Live
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_LIVE_MODEL_MODIFYSHOWLISTREQUEST_H_
