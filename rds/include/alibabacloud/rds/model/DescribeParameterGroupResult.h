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

#ifndef ALIBABACLOUD_RDS_MODEL_DESCRIBEPARAMETERGROUPRESULT_H_
#define ALIBABACLOUD_RDS_MODEL_DESCRIBEPARAMETERGROUPRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/rds/RdsExport.h>

namespace AlibabaCloud
{
	namespace Rds
	{
		namespace Model
		{
			class ALIBABACLOUD_RDS_EXPORT DescribeParameterGroupResult : public ServiceResult
			{
			public:
				struct ParameterGroup
				{
					struct ParameterDetail
					{
						std::string paramValue;
						std::string paramName;
					};
					std::vector<ParameterGroup::ParameterDetail> paramDetail;
					std::string engineVersion;
					std::string parameterGroupId;
					int forceRestart;
					std::string parameterGroupName;
					std::string createTime;
					int paramCounts;
					std::string parameterGroupDesc;
					int parameterGroupType;
					std::string updateTime;
					std::string engine;
				};
				struct RelatedCustinsInfoItem
				{
					std::string appliedTime;
					std::string dBInstanceName;
				};


				DescribeParameterGroupResult();
				explicit DescribeParameterGroupResult(const std::string &payload);
				~DescribeParameterGroupResult();
				std::vector<ParameterGroup> getParamGroup()const;
				std::vector<RelatedCustinsInfoItem> getRelatedCustinsInfo()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<ParameterGroup> paramGroup_;
				std::vector<RelatedCustinsInfoItem> relatedCustinsInfo_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_RDS_MODEL_DESCRIBEPARAMETERGROUPRESULT_H_