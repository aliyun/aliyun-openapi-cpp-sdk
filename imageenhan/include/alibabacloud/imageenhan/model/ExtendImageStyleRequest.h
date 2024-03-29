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

#ifndef ALIBABACLOUD_IMAGEENHAN_MODEL_EXTENDIMAGESTYLEREQUEST_H_
#define ALIBABACLOUD_IMAGEENHAN_MODEL_EXTENDIMAGESTYLEREQUEST_H_

#include <alibabacloud/imageenhan/ImageenhanExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Imageenhan {
namespace Model {
class ALIBABACLOUD_IMAGEENHAN_EXPORT ExtendImageStyleRequest : public RpcServiceRequest {
public:
	ExtendImageStyleRequest();
	~ExtendImageStyleRequest();
	std::string getMajorUrl() const;
	void setMajorUrl(const std::string &majorUrl);
	std::string getStyleUrl() const;
	void setStyleUrl(const std::string &styleUrl);

private:
	std::string majorUrl_;
	std::string styleUrl_;
};
} // namespace Model
} // namespace Imageenhan
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_IMAGEENHAN_MODEL_EXTENDIMAGESTYLEREQUEST_H_
