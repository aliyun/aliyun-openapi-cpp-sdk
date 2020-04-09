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

#ifndef ALIBABACLOUD_RETAILCLOUD_MODEL_LISTPERSISTENTVOLUMERESULT_H_
#define ALIBABACLOUD_RETAILCLOUD_MODEL_LISTPERSISTENTVOLUMERESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/retailcloud/RetailcloudExport.h>

namespace AlibabaCloud
{
	namespace Retailcloud
	{
		namespace Model
		{
			class ALIBABACLOUD_RETAILCLOUD_EXPORT ListPersistentVolumeResult : public ServiceResult
			{
			public:
				struct PersistentVolumeDetail
				{
					std::string status;
					std::string capacity;
					std::string reclaimPolicy;
					std::string storageClass;
					std::string createTime;
					std::string accessModes;
					std::string mountDir;
					std::string pvcName;
					std::string reason;
					std::string name;
				};


				ListPersistentVolumeResult();
				explicit ListPersistentVolumeResult(const std::string &payload);
				~ListPersistentVolumeResult();
				long getTotalCount()const;
				int getPageSize()const;
				int getPageNumber()const;
				std::string getErrMsg()const;
				std::vector<PersistentVolumeDetail> getData()const;
				int getCode()const;

			protected:
				void parse(const std::string &payload);
			private:
				long totalCount_;
				int pageSize_;
				int pageNumber_;
				std::string errMsg_;
				std::vector<PersistentVolumeDetail> data_;
				int code_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_RETAILCLOUD_MODEL_LISTPERSISTENTVOLUMERESULT_H_