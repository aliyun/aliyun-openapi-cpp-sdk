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

#ifndef ALIBABACLOUD_EMR_MODEL_DESCRIBESCALINGGROUPV2RESULT_H_
#define ALIBABACLOUD_EMR_MODEL_DESCRIBESCALINGGROUPV2RESULT_H_

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
			class ALIBABACLOUD_EMR_EXPORT DescribeScalingGroupV2Result : public ServiceResult
			{
			public:


				DescribeScalingGroupV2Result();
				explicit DescribeScalingGroupV2Result(const std::string &payload);
				~DescribeScalingGroupV2Result();
				std::string getDescription()const;
				std::string getHostGroupBizId()const;
				std::string getConfigState()const;
				std::string getScalingInMode()const;
				std::string getScalingGroupId()const;
				int getScalingMaxSize()const;
				int getScalingMinSize()const;
				std::string getName()const;
				std::string getActiveStatus()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string description_;
				std::string hostGroupBizId_;
				std::string configState_;
				std::string scalingInMode_;
				std::string scalingGroupId_;
				int scalingMaxSize_;
				int scalingMinSize_;
				std::string name_;
				std::string activeStatus_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_EMR_MODEL_DESCRIBESCALINGGROUPV2RESULT_H_