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

#ifndef ALIBABACLOUD_CDRS_MODEL_SEARCHAGGREGATEOBJECTREQUEST_H_
#define ALIBABACLOUD_CDRS_MODEL_SEARCHAGGREGATEOBJECTREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/cdrs/CDRSExport.h>

namespace AlibabaCloud
{
	namespace CDRS
	{
		namespace Model
		{
			class ALIBABACLOUD_CDRS_EXPORT SearchAggregateObjectRequest : public RpcServiceRequest
			{

			public:
				SearchAggregateObjectRequest();
				~SearchAggregateObjectRequest();

				std::string getShotTimeEnd()const;
				void setShotTimeEnd(const std::string& shotTimeEnd);
				std::string getCorpId()const;
				void setCorpId(const std::string& corpId);
				int getPageNumber()const;
				void setPageNumber(int pageNumber);
				std::string getFeature()const;
				void setFeature(const std::string& feature);
				std::string getVendor()const;
				void setVendor(const std::string& vendor);
				bool getRequireTotalCount()const;
				void setRequireTotalCount(bool requireTotalCount);
				int getPageSize()const;
				void setPageSize(int pageSize);
				std::string getImageContent()const;
				void setImageContent(const std::string& imageContent);
				std::string getObjectType()const;
				void setObjectType(const std::string& objectType);
				std::string getDeviceList()const;
				void setDeviceList(const std::string& deviceList);
				std::string getImageUrl()const;
				void setImageUrl(const std::string& imageUrl);
				std::string getAttributes()const;
				void setAttributes(const std::string& attributes);
				std::string getShotTimeStart()const;
				void setShotTimeStart(const std::string& shotTimeStart);

            private:
				std::string shotTimeEnd_;
				std::string corpId_;
				int pageNumber_;
				std::string feature_;
				std::string vendor_;
				bool requireTotalCount_;
				int pageSize_;
				std::string imageContent_;
				std::string objectType_;
				std::string deviceList_;
				std::string imageUrl_;
				std::string attributes_;
				std::string shotTimeStart_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CDRS_MODEL_SEARCHAGGREGATEOBJECTREQUEST_H_