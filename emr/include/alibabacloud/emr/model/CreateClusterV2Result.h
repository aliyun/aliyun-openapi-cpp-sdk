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

#ifndef ALIBABACLOUD_EMR_MODEL_CREATECLUSTERV2RESULT_H_
#define ALIBABACLOUD_EMR_MODEL_CREATECLUSTERV2RESULT_H_

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
			class ALIBABACLOUD_EMR_EXPORT CreateClusterV2Result : public ServiceResult
			{
			public:


				CreateClusterV2Result();
				explicit CreateClusterV2Result(const std::string &payload);
				~CreateClusterV2Result();
				std::string getMasterOrderId()const;
				std::string getCoreOrderId()const;
				std::string getClusterId()const;
				std::string getEmrOrderId()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string masterOrderId_;
				std::string coreOrderId_;
				std::string clusterId_;
				std::string emrOrderId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_EMR_MODEL_CREATECLUSTERV2RESULT_H_