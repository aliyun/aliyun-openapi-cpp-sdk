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

#ifndef ALIBABACLOUD_VOD_MODEL_UPDATEMEDIASTORAGECLASSREQUEST_H_
#define ALIBABACLOUD_VOD_MODEL_UPDATEMEDIASTORAGECLASSREQUEST_H_

#include <alibabacloud/vod/VodExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Vod {
namespace Model {
class ALIBABACLOUD_VOD_EXPORT UpdateMediaStorageClassRequest : public RpcServiceRequest {
public:
	UpdateMediaStorageClassRequest();
	~UpdateMediaStorageClassRequest();
	std::string getRestoreTier() const;
	void setRestoreTier(const std::string &restoreTier);
	std::string getScope() const;
	void setScope(const std::string &scope);
	std::string getMediaIds() const;
	void setMediaIds(const std::string &mediaIds);
	std::string getStorageClass() const;
	void setStorageClass(const std::string &storageClass);
	bool getAllowUpdateWithoutTimeLimit() const;
	void setAllowUpdateWithoutTimeLimit(bool allowUpdateWithoutTimeLimit);

private:
	std::string restoreTier_;
	std::string scope_;
	std::string mediaIds_;
	std::string storageClass_;
	bool allowUpdateWithoutTimeLimit_;
};
} // namespace Model
} // namespace Vod
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_VOD_MODEL_UPDATEMEDIASTORAGECLASSREQUEST_H_
