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

#ifndef ALIBABACLOUD_IMM_MODEL_FINDIMAGESREQUEST_H_
#define ALIBABACLOUD_IMM_MODEL_FINDIMAGESREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/imm/ImmExport.h>

namespace AlibabaCloud
{
	namespace Imm
	{
		namespace Model
		{
			class ALIBABACLOUD_IMM_EXPORT FindImagesRequest : public RpcServiceRequest
			{

			public:
				FindImagesRequest();
				~FindImagesRequest();

				std::string getGender()const;
				void setGender(const std::string& gender);
				std::string getProject()const;
				void setProject(const std::string& project);
				std::string getExternalId()const;
				void setExternalId(const std::string& externalId);
				std::string getImageSizeRange()const;
				void setImageSizeRange(const std::string& imageSizeRange);
				std::string getRemarksBPrefix()const;
				void setRemarksBPrefix(const std::string& remarksBPrefix);
				std::string getAccessKeyId()const;
				void setAccessKeyId(const std::string& accessKeyId);
				std::string getLocationBoundary()const;
				void setLocationBoundary(const std::string& locationBoundary);
				std::string getImageTimeRange()const;
				void setImageTimeRange(const std::string& imageTimeRange);
				std::string getRegionId()const;
				void setRegionId(const std::string& regionId);
				std::string getOCRContentsMatch()const;
				void setOCRContentsMatch(const std::string& oCRContentsMatch);
				int getLimit()const;
				void setLimit(int limit);
				std::string getRemarksDPrefix()const;
				void setRemarksDPrefix(const std::string& remarksDPrefix);
				std::string getSourceType()const;
				void setSourceType(const std::string& sourceType);
				std::string getAgeRange()const;
				void setAgeRange(const std::string& ageRange);
				std::string getOrder()const;
				void setOrder(const std::string& order);
				std::string getRemarksAPrefix()const;
				void setRemarksAPrefix(const std::string& remarksAPrefix);
				std::string getGroupId()const;
				void setGroupId(const std::string& groupId);
				std::string getOrderBy()const;
				void setOrderBy(const std::string& orderBy);
				std::string getTagNames()const;
				void setTagNames(const std::string& tagNames);
				std::string getSourceUriPrefix()const;
				void setSourceUriPrefix(const std::string& sourceUriPrefix);
				std::string getEmotion()const;
				void setEmotion(const std::string& emotion);
				std::string getMarker()const;
				void setMarker(const std::string& marker);
				std::string getRemarksCPrefix()const;
				void setRemarksCPrefix(const std::string& remarksCPrefix);
				std::string getCreateTimeRange()const;
				void setCreateTimeRange(const std::string& createTimeRange);
				std::string getSetId()const;
				void setSetId(const std::string& setId);
				std::string getModifyTimeRange()const;
				void setModifyTimeRange(const std::string& modifyTimeRange);

            private:
				std::string gender_;
				std::string project_;
				std::string externalId_;
				std::string imageSizeRange_;
				std::string remarksBPrefix_;
				std::string accessKeyId_;
				std::string locationBoundary_;
				std::string imageTimeRange_;
				std::string regionId_;
				std::string oCRContentsMatch_;
				int limit_;
				std::string remarksDPrefix_;
				std::string sourceType_;
				std::string ageRange_;
				std::string order_;
				std::string remarksAPrefix_;
				std::string groupId_;
				std::string orderBy_;
				std::string tagNames_;
				std::string sourceUriPrefix_;
				std::string emotion_;
				std::string marker_;
				std::string remarksCPrefix_;
				std::string createTimeRange_;
				std::string setId_;
				std::string modifyTimeRange_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_IMM_MODEL_FINDIMAGESREQUEST_H_