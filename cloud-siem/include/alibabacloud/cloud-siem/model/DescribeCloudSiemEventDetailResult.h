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

#ifndef ALIBABACLOUD_CLOUD_SIEM_MODEL_DESCRIBECLOUDSIEMEVENTDETAILRESULT_H_
#define ALIBABACLOUD_CLOUD_SIEM_MODEL_DESCRIBECLOUDSIEMEVENTDETAILRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/cloud-siem/Cloud_siemExport.h>

namespace AlibabaCloud
{
	namespace Cloud_siem
	{
		namespace Model
		{
			class ALIBABACLOUD_CLOUD_SIEM_EXPORT DescribeCloudSiemEventDetailResult : public ServiceResult
			{
			public:
				struct Data
				{
					struct AttckStage
					{
						std::string tacticName;
						std::string tacticId;
						int alertNum;
					};
					int status;
					std::vector<AttckStage> attckStages;
					std::string description;
					std::string incidentType;
					std::string descriptionEn;
					float threatScore;
					std::string ruleId;
					std::string gmtModified;
					int alertNum;
					int assetNum;
					std::string extContent;
					std::string remark;
					std::string incidentName;
					std::vector<std::string> attCkLabels;
					std::string gmtCreate;
					std::vector<std::string> dataSources;
					std::string threatLevel;
					std::string incidentNameEn;
					std::string referAccount;
					long aliuid;
					std::string incidentUuid;
				};


				DescribeCloudSiemEventDetailResult();
				explicit DescribeCloudSiemEventDetailResult(const std::string &payload);
				~DescribeCloudSiemEventDetailResult();
				std::string getMessage()const;
				Data getData()const;
				int getCode()const;
				bool getSuccess()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string message_;
				Data data_;
				int code_;
				bool success_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CLOUD_SIEM_MODEL_DESCRIBECLOUDSIEMEVENTDETAILRESULT_H_