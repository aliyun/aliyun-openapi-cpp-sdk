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

#ifndef ALIBABACLOUD_EHPCINSTANT_MODEL_LISTIMAGESREQUEST_H_
#define ALIBABACLOUD_EHPCINSTANT_MODEL_LISTIMAGESREQUEST_H_

#include <alibabacloud/ehpcinstant/EhpcInstantExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace EhpcInstant {
namespace Model {
class ALIBABACLOUD_EHPCINSTANT_EXPORT ListImagesRequest : public RpcServiceRequest {
public:
	ListImagesRequest();
	~ListImagesRequest();
	std::string getImageType() const;
	void setImageType(const std::string &imageType);
	std::vector<std::string> getImageNames() const;
	void setImageNames(const std::vector<std::string> &imageNames);
	long getPageNumber() const;
	void setPageNumber(long pageNumber);
	std::string getImageCategory() const;
	void setImageCategory(const std::string &imageCategory);
	std::vector<std::string> getAppIds() const;
	void setAppIds(const std::vector<std::string> &appIds);
	long getPageSize() const;
	void setPageSize(long pageSize);
	std::vector<std::string> getImageIds() const;
	void setImageIds(const std::vector<std::string> &imageIds);

private:
	std::string imageType_;
	std::vector<std::string> imageNames_;
	long pageNumber_;
	std::string imageCategory_;
	std::vector<std::string> appIds_;
	long pageSize_;
	std::vector<std::string> imageIds_;
};
} // namespace Model
} // namespace EhpcInstant
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_EHPCINSTANT_MODEL_LISTIMAGESREQUEST_H_
