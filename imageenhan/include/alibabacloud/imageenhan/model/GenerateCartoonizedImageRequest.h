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

#ifndef ALIBABACLOUD_IMAGEENHAN_MODEL_GENERATECARTOONIZEDIMAGEREQUEST_H_
#define ALIBABACLOUD_IMAGEENHAN_MODEL_GENERATECARTOONIZEDIMAGEREQUEST_H_

#include <alibabacloud/imageenhan/ImageenhanExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Imageenhan {
namespace Model {
class ALIBABACLOUD_IMAGEENHAN_EXPORT GenerateCartoonizedImageRequest : public RpcServiceRequest {
public:
	GenerateCartoonizedImageRequest();
	~GenerateCartoonizedImageRequest();
	std::string getImageType() const;
	void setImageType(const std::string &imageType);
	std::string getIndex() const;
	void setIndex(const std::string &index);
	bool getAsync() const;
	void setAsync(bool async);
	std::string getImageUrl() const;
	void setImageUrl(const std::string &imageUrl);

private:
	std::string imageType_;
	std::string index_;
	bool async_;
	std::string imageUrl_;
};
} // namespace Model
} // namespace Imageenhan
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_IMAGEENHAN_MODEL_GENERATECARTOONIZEDIMAGEREQUEST_H_
