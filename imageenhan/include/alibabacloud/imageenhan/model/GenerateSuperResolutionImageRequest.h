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

#ifndef ALIBABACLOUD_IMAGEENHAN_MODEL_GENERATESUPERRESOLUTIONIMAGEREQUEST_H_
#define ALIBABACLOUD_IMAGEENHAN_MODEL_GENERATESUPERRESOLUTIONIMAGEREQUEST_H_

#include <alibabacloud/imageenhan/ImageenhanExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Imageenhan {
namespace Model {
class ALIBABACLOUD_IMAGEENHAN_EXPORT GenerateSuperResolutionImageRequest : public RpcServiceRequest {
public:
	GenerateSuperResolutionImageRequest();
	~GenerateSuperResolutionImageRequest();
	int getScale() const;
	void setScale(int scale);
	std::string getUserData() const;
	void setUserData(const std::string &userData);
	std::string getOutputFormat() const;
	void setOutputFormat(const std::string &outputFormat);
	bool getAsync() const;
	void setAsync(bool async);
	std::string getImageUrl() const;
	void setImageUrl(const std::string &imageUrl);
	int getOutputQuality() const;
	void setOutputQuality(int outputQuality);

private:
	int scale_;
	std::string userData_;
	std::string outputFormat_;
	bool async_;
	std::string imageUrl_;
	int outputQuality_;
};
} // namespace Model
} // namespace Imageenhan
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_IMAGEENHAN_MODEL_GENERATESUPERRESOLUTIONIMAGEREQUEST_H_
