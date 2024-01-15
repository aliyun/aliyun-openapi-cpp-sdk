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

#ifndef ALIBABACLOUD_LINKVISUAL_MODEL_PICTURESEARCHPICTUREREQUEST_H_
#define ALIBABACLOUD_LINKVISUAL_MODEL_PICTURESEARCHPICTUREREQUEST_H_

#include <alibabacloud/linkvisual/LinkvisualExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Linkvisual {
namespace Model {
class ALIBABACLOUD_LINKVISUAL_EXPORT PictureSearchPictureRequest : public RpcServiceRequest {
public:
	PictureSearchPictureRequest();
	~PictureSearchPictureRequest();
	float getThreshold() const;
	void setThreshold(float threshold);
	std::string getSearchPicUrl() const;
	void setSearchPicUrl(const std::string &searchPicUrl);
	long getStartTime() const;
	void setStartTime(long startTime);
	int getPictureSearchType() const;
	void setPictureSearchType(int pictureSearchType);
	int getPageSize() const;
	void setPageSize(int pageSize);
	long getEndTime() const;
	void setEndTime(long endTime);
	int getCurrentPage() const;
	void setCurrentPage(int currentPage);
	bool getContainPicUrl() const;
	void setContainPicUrl(bool containPicUrl);
	std::string getApiProduct() const;
	void setApiProduct(const std::string &apiProduct);
	std::string getApiRevision() const;
	void setApiRevision(const std::string &apiRevision);
	std::string getAppInstanceId() const;
	void setAppInstanceId(const std::string &appInstanceId);

private:
	float threshold_;
	std::string searchPicUrl_;
	long startTime_;
	int pictureSearchType_;
	int pageSize_;
	long endTime_;
	int currentPage_;
	bool containPicUrl_;
	std::string apiProduct_;
	std::string apiRevision_;
	std::string appInstanceId_;
};
} // namespace Model
} // namespace Linkvisual
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_LINKVISUAL_MODEL_PICTURESEARCHPICTUREREQUEST_H_
