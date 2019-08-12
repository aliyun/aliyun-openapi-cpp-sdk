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

#ifndef ALIBABACLOUD_EMR_MODEL_GETBACKUPINFORESULT_H_
#define ALIBABACLOUD_EMR_MODEL_GETBACKUPINFORESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/emr/EmrExport.h>

namespace AlibabaCloud
{
	namespace Emr
	{
		namespace Model
		{
			class ALIBABACLOUD_EMR_EXPORT GetBackupInfoResult : public ServiceResult
			{
			public:
				struct MetadataInfo
				{
					std::string metadataType;
					std::string properties;
				};


				GetBackupInfoResult();
				explicit GetBackupInfoResult(const std::string &payload);
				~GetBackupInfoResult();
				std::string getStatus()const;
				MetadataInfo getMetadataInfo()const;
				std::string getTarFileName()const;
				std::string getClusterId()const;
				long getCreateTime()const;
				std::string getBackupPlanId()const;
				std::string getId()const;
				std::string getMd5()const;
				std::string getStorePath()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string status_;
				MetadataInfo metadataInfo_;
				std::string tarFileName_;
				std::string clusterId_;
				long createTime_;
				std::string backupPlanId_;
				std::string id_;
				std::string md5_;
				std::string storePath_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_EMR_MODEL_GETBACKUPINFORESULT_H_