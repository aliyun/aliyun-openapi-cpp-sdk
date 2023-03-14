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

#ifndef ALIBABACLOUD_VIDEORECOG_MODEL_SPLITVIDEOPARTSREQUEST_H_
#define ALIBABACLOUD_VIDEORECOG_MODEL_SPLITVIDEOPARTSREQUEST_H_

#include <alibabacloud/videorecog/VideorecogExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Videorecog {
namespace Model {
class ALIBABACLOUD_VIDEORECOG_EXPORT SplitVideoPartsRequest : public RpcServiceRequest {
public:
	SplitVideoPartsRequest();
	~SplitVideoPartsRequest();
	std::string get_Template() const;
	void set_Template(const std::string &_template);
	int getMinTime() const;
	void setMinTime(int minTime);
	int getMaxTime() const;
	void setMaxTime(int maxTime);
	bool getAsync() const;
	void setAsync(bool async);
	std::string getVideoUrl() const;
	void setVideoUrl(const std::string &videoUrl);

private:
	std::string _template_;
	int minTime_;
	int maxTime_;
	bool async_;
	std::string videoUrl_;
};
} // namespace Model
} // namespace Videorecog
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_VIDEORECOG_MODEL_SPLITVIDEOPARTSREQUEST_H_
