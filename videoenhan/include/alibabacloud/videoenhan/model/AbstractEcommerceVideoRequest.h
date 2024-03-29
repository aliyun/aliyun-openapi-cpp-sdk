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

#ifndef ALIBABACLOUD_VIDEOENHAN_MODEL_ABSTRACTECOMMERCEVIDEOREQUEST_H_
#define ALIBABACLOUD_VIDEOENHAN_MODEL_ABSTRACTECOMMERCEVIDEOREQUEST_H_

#include <alibabacloud/videoenhan/VideoenhanExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Videoenhan {
namespace Model {
class ALIBABACLOUD_VIDEOENHAN_EXPORT AbstractEcommerceVideoRequest : public RpcServiceRequest {
public:
	AbstractEcommerceVideoRequest();
	~AbstractEcommerceVideoRequest();
	float getDuration() const;
	void setDuration(float duration);
	int getHeight() const;
	void setHeight(int height);
	bool getAsync() const;
	void setAsync(bool async);
	std::string getVideoUrl() const;
	void setVideoUrl(const std::string &videoUrl);
	int getWidth() const;
	void setWidth(int width);

private:
	float duration_;
	int height_;
	bool async_;
	std::string videoUrl_;
	int width_;
};
} // namespace Model
} // namespace Videoenhan
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_VIDEOENHAN_MODEL_ABSTRACTECOMMERCEVIDEOREQUEST_H_
