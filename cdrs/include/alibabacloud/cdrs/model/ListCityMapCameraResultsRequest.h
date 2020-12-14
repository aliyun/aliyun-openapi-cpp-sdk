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

#ifndef ALIBABACLOUD_CDRS_MODEL_LISTCITYMAPCAMERARESULTSREQUEST_H_
#define ALIBABACLOUD_CDRS_MODEL_LISTCITYMAPCAMERARESULTSREQUEST_H_

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
			class ALIBABACLOUD_CDRS_EXPORT ListCityMapCameraResultsRequest : public RpcServiceRequest
			{

			public:
				ListCityMapCameraResultsRequest();
				~ListCityMapCameraResultsRequest();

				long getPageNum()const;
				void setPageNum(long pageNum);
				std::map<std::string, std::string> getDataSourceIdList()const;
				void setDataSourceIdList(const std::map<std::string, std::string>& dataSourceIdList);
				long getPageSize()const;
				void setPageSize(long pageSize);

            private:
				long pageNum_;
				std::map<std::string, std::string> dataSourceIdList_;
				long pageSize_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CDRS_MODEL_LISTCITYMAPCAMERARESULTSREQUEST_H_